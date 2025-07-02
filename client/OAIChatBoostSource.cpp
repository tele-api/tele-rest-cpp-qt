/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIChatBoostSource.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatBoostSource::OAIChatBoostSource(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatBoostSource::OAIChatBoostSource() {
    this->initializeModel();
}

OAIChatBoostSource::~OAIChatBoostSource() {}

void OAIChatBoostSource::initializeModel() {

    m_source_isSet = false;
    m_source_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_giveaway_message_id_isSet = false;
    m_giveaway_message_id_isValid = false;

    m_prize_star_count_isSet = false;
    m_prize_star_count_isValid = false;

    m_is_unclaimed_isSet = false;
    m_is_unclaimed_isValid = false;
}

void OAIChatBoostSource::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatBoostSource::fromJsonObject(QJsonObject json) {

    m_source_isValid = ::tele_rest::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_giveaway_message_id_isValid = ::tele_rest::fromJsonValue(m_giveaway_message_id, json[QString("giveaway_message_id")]);
    m_giveaway_message_id_isSet = !json[QString("giveaway_message_id")].isNull() && m_giveaway_message_id_isValid;

    m_prize_star_count_isValid = ::tele_rest::fromJsonValue(m_prize_star_count, json[QString("prize_star_count")]);
    m_prize_star_count_isSet = !json[QString("prize_star_count")].isNull() && m_prize_star_count_isValid;

    m_is_unclaimed_isValid = ::tele_rest::fromJsonValue(m_is_unclaimed, json[QString("is_unclaimed")]);
    m_is_unclaimed_isSet = !json[QString("is_unclaimed")].isNull() && m_is_unclaimed_isValid;
}

QString OAIChatBoostSource::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatBoostSource::asJsonObject() const {
    QJsonObject obj;
    if (m_source_isSet) {
        obj.insert(QString("source"), ::tele_rest::toJsonValue(m_source));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_giveaway_message_id_isSet) {
        obj.insert(QString("giveaway_message_id"), ::tele_rest::toJsonValue(m_giveaway_message_id));
    }
    if (m_prize_star_count_isSet) {
        obj.insert(QString("prize_star_count"), ::tele_rest::toJsonValue(m_prize_star_count));
    }
    if (m_is_unclaimed_isSet) {
        obj.insert(QString("is_unclaimed"), ::tele_rest::toJsonValue(m_is_unclaimed));
    }
    return obj;
}

QString OAIChatBoostSource::getSource() const {
    return m_source;
}
void OAIChatBoostSource::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIChatBoostSource::is_source_Set() const{
    return m_source_isSet;
}

bool OAIChatBoostSource::is_source_Valid() const{
    return m_source_isValid;
}

OAIUser OAIChatBoostSource::getUser() const {
    return m_user;
}
void OAIChatBoostSource::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIChatBoostSource::is_user_Set() const{
    return m_user_isSet;
}

bool OAIChatBoostSource::is_user_Valid() const{
    return m_user_isValid;
}

qint32 OAIChatBoostSource::getGiveawayMessageId() const {
    return m_giveaway_message_id;
}
void OAIChatBoostSource::setGiveawayMessageId(const qint32 &giveaway_message_id) {
    m_giveaway_message_id = giveaway_message_id;
    m_giveaway_message_id_isSet = true;
}

bool OAIChatBoostSource::is_giveaway_message_id_Set() const{
    return m_giveaway_message_id_isSet;
}

bool OAIChatBoostSource::is_giveaway_message_id_Valid() const{
    return m_giveaway_message_id_isValid;
}

qint32 OAIChatBoostSource::getPrizeStarCount() const {
    return m_prize_star_count;
}
void OAIChatBoostSource::setPrizeStarCount(const qint32 &prize_star_count) {
    m_prize_star_count = prize_star_count;
    m_prize_star_count_isSet = true;
}

bool OAIChatBoostSource::is_prize_star_count_Set() const{
    return m_prize_star_count_isSet;
}

bool OAIChatBoostSource::is_prize_star_count_Valid() const{
    return m_prize_star_count_isValid;
}

bool OAIChatBoostSource::isIsUnclaimed() const {
    return m_is_unclaimed;
}
void OAIChatBoostSource::setIsUnclaimed(const bool &is_unclaimed) {
    m_is_unclaimed = is_unclaimed;
    m_is_unclaimed_isSet = true;
}

bool OAIChatBoostSource::is_is_unclaimed_Set() const{
    return m_is_unclaimed_isSet;
}

bool OAIChatBoostSource::is_is_unclaimed_Valid() const{
    return m_is_unclaimed_isValid;
}

bool OAIChatBoostSource::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prize_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_unclaimed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatBoostSource::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_isValid && m_user_isValid && m_giveaway_message_id_isValid && true;
}

} // namespace tele_rest
