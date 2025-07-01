/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIGiveawayCompleted.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGiveawayCompleted::OAIGiveawayCompleted(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGiveawayCompleted::OAIGiveawayCompleted() {
    this->initializeModel();
}

OAIGiveawayCompleted::~OAIGiveawayCompleted() {}

void OAIGiveawayCompleted::initializeModel() {

    m_winner_count_isSet = false;
    m_winner_count_isValid = false;

    m_unclaimed_prize_count_isSet = false;
    m_unclaimed_prize_count_isValid = false;

    m_giveaway_message_isSet = false;
    m_giveaway_message_isValid = false;

    m_is_star_giveaway_isSet = false;
    m_is_star_giveaway_isValid = false;
}

void OAIGiveawayCompleted::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGiveawayCompleted::fromJsonObject(QJsonObject json) {

    m_winner_count_isValid = ::tele_rest::fromJsonValue(m_winner_count, json[QString("winner_count")]);
    m_winner_count_isSet = !json[QString("winner_count")].isNull() && m_winner_count_isValid;

    m_unclaimed_prize_count_isValid = ::tele_rest::fromJsonValue(m_unclaimed_prize_count, json[QString("unclaimed_prize_count")]);
    m_unclaimed_prize_count_isSet = !json[QString("unclaimed_prize_count")].isNull() && m_unclaimed_prize_count_isValid;

    m_giveaway_message_isValid = ::tele_rest::fromJsonValue(m_giveaway_message, json[QString("giveaway_message")]);
    m_giveaway_message_isSet = !json[QString("giveaway_message")].isNull() && m_giveaway_message_isValid;

    m_is_star_giveaway_isValid = ::tele_rest::fromJsonValue(m_is_star_giveaway, json[QString("is_star_giveaway")]);
    m_is_star_giveaway_isSet = !json[QString("is_star_giveaway")].isNull() && m_is_star_giveaway_isValid;
}

QString OAIGiveawayCompleted::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGiveawayCompleted::asJsonObject() const {
    QJsonObject obj;
    if (m_winner_count_isSet) {
        obj.insert(QString("winner_count"), ::tele_rest::toJsonValue(m_winner_count));
    }
    if (m_unclaimed_prize_count_isSet) {
        obj.insert(QString("unclaimed_prize_count"), ::tele_rest::toJsonValue(m_unclaimed_prize_count));
    }
    if (m_giveaway_message.isSet()) {
        obj.insert(QString("giveaway_message"), ::tele_rest::toJsonValue(m_giveaway_message));
    }
    if (m_is_star_giveaway_isSet) {
        obj.insert(QString("is_star_giveaway"), ::tele_rest::toJsonValue(m_is_star_giveaway));
    }
    return obj;
}

qint32 OAIGiveawayCompleted::getWinnerCount() const {
    return m_winner_count;
}
void OAIGiveawayCompleted::setWinnerCount(const qint32 &winner_count) {
    m_winner_count = winner_count;
    m_winner_count_isSet = true;
}

bool OAIGiveawayCompleted::is_winner_count_Set() const{
    return m_winner_count_isSet;
}

bool OAIGiveawayCompleted::is_winner_count_Valid() const{
    return m_winner_count_isValid;
}

qint32 OAIGiveawayCompleted::getUnclaimedPrizeCount() const {
    return m_unclaimed_prize_count;
}
void OAIGiveawayCompleted::setUnclaimedPrizeCount(const qint32 &unclaimed_prize_count) {
    m_unclaimed_prize_count = unclaimed_prize_count;
    m_unclaimed_prize_count_isSet = true;
}

bool OAIGiveawayCompleted::is_unclaimed_prize_count_Set() const{
    return m_unclaimed_prize_count_isSet;
}

bool OAIGiveawayCompleted::is_unclaimed_prize_count_Valid() const{
    return m_unclaimed_prize_count_isValid;
}

OAIMessage OAIGiveawayCompleted::getGiveawayMessage() const {
    return m_giveaway_message;
}
void OAIGiveawayCompleted::setGiveawayMessage(const OAIMessage &giveaway_message) {
    m_giveaway_message = giveaway_message;
    m_giveaway_message_isSet = true;
}

bool OAIGiveawayCompleted::is_giveaway_message_Set() const{
    return m_giveaway_message_isSet;
}

bool OAIGiveawayCompleted::is_giveaway_message_Valid() const{
    return m_giveaway_message_isValid;
}

bool OAIGiveawayCompleted::isIsStarGiveaway() const {
    return m_is_star_giveaway;
}
void OAIGiveawayCompleted::setIsStarGiveaway(const bool &is_star_giveaway) {
    m_is_star_giveaway = is_star_giveaway;
    m_is_star_giveaway_isSet = true;
}

bool OAIGiveawayCompleted::is_is_star_giveaway_Set() const{
    return m_is_star_giveaway_isSet;
}

bool OAIGiveawayCompleted::is_is_star_giveaway_Valid() const{
    return m_is_star_giveaway_isValid;
}

bool OAIGiveawayCompleted::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_winner_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unclaimed_prize_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_star_giveaway_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGiveawayCompleted::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_winner_count_isValid && true;
}

} // namespace tele_rest
