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

#include "OAIGiftPremiumSubscriptionRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGiftPremiumSubscriptionRequest::OAIGiftPremiumSubscriptionRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGiftPremiumSubscriptionRequest::OAIGiftPremiumSubscriptionRequest() {
    this->initializeModel();
}

OAIGiftPremiumSubscriptionRequest::~OAIGiftPremiumSubscriptionRequest() {}

void OAIGiftPremiumSubscriptionRequest::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_month_count_isSet = false;
    m_month_count_isValid = false;

    m_star_count_isSet = false;
    m_star_count_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_text_parse_mode_isSet = false;
    m_text_parse_mode_isValid = false;

    m_text_entities_isSet = false;
    m_text_entities_isValid = false;
}

void OAIGiftPremiumSubscriptionRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGiftPremiumSubscriptionRequest::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_month_count_isValid = ::tele_rest::fromJsonValue(m_month_count, json[QString("month_count")]);
    m_month_count_isSet = !json[QString("month_count")].isNull() && m_month_count_isValid;

    m_star_count_isValid = ::tele_rest::fromJsonValue(m_star_count, json[QString("star_count")]);
    m_star_count_isSet = !json[QString("star_count")].isNull() && m_star_count_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_text_parse_mode_isValid = ::tele_rest::fromJsonValue(m_text_parse_mode, json[QString("text_parse_mode")]);
    m_text_parse_mode_isSet = !json[QString("text_parse_mode")].isNull() && m_text_parse_mode_isValid;

    m_text_entities_isValid = ::tele_rest::fromJsonValue(m_text_entities, json[QString("text_entities")]);
    m_text_entities_isSet = !json[QString("text_entities")].isNull() && m_text_entities_isValid;
}

QString OAIGiftPremiumSubscriptionRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGiftPremiumSubscriptionRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_month_count_isSet) {
        obj.insert(QString("month_count"), ::tele_rest::toJsonValue(m_month_count));
    }
    if (m_star_count_isSet) {
        obj.insert(QString("star_count"), ::tele_rest::toJsonValue(m_star_count));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_text_parse_mode_isSet) {
        obj.insert(QString("text_parse_mode"), ::tele_rest::toJsonValue(m_text_parse_mode));
    }
    if (m_text_entities.size() > 0) {
        obj.insert(QString("text_entities"), ::tele_rest::toJsonValue(m_text_entities));
    }
    return obj;
}

qint32 OAIGiftPremiumSubscriptionRequest::getUserId() const {
    return m_user_id;
}
void OAIGiftPremiumSubscriptionRequest::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIGiftPremiumSubscriptionRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIGiftPremiumSubscriptionRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

qint32 OAIGiftPremiumSubscriptionRequest::getMonthCount() const {
    return m_month_count;
}
void OAIGiftPremiumSubscriptionRequest::setMonthCount(const qint32 &month_count) {
    m_month_count = month_count;
    m_month_count_isSet = true;
}

bool OAIGiftPremiumSubscriptionRequest::is_month_count_Set() const{
    return m_month_count_isSet;
}

bool OAIGiftPremiumSubscriptionRequest::is_month_count_Valid() const{
    return m_month_count_isValid;
}

qint32 OAIGiftPremiumSubscriptionRequest::getStarCount() const {
    return m_star_count;
}
void OAIGiftPremiumSubscriptionRequest::setStarCount(const qint32 &star_count) {
    m_star_count = star_count;
    m_star_count_isSet = true;
}

bool OAIGiftPremiumSubscriptionRequest::is_star_count_Set() const{
    return m_star_count_isSet;
}

bool OAIGiftPremiumSubscriptionRequest::is_star_count_Valid() const{
    return m_star_count_isValid;
}

QString OAIGiftPremiumSubscriptionRequest::getText() const {
    return m_text;
}
void OAIGiftPremiumSubscriptionRequest::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIGiftPremiumSubscriptionRequest::is_text_Set() const{
    return m_text_isSet;
}

bool OAIGiftPremiumSubscriptionRequest::is_text_Valid() const{
    return m_text_isValid;
}

QString OAIGiftPremiumSubscriptionRequest::getTextParseMode() const {
    return m_text_parse_mode;
}
void OAIGiftPremiumSubscriptionRequest::setTextParseMode(const QString &text_parse_mode) {
    m_text_parse_mode = text_parse_mode;
    m_text_parse_mode_isSet = true;
}

bool OAIGiftPremiumSubscriptionRequest::is_text_parse_mode_Set() const{
    return m_text_parse_mode_isSet;
}

bool OAIGiftPremiumSubscriptionRequest::is_text_parse_mode_Valid() const{
    return m_text_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIGiftPremiumSubscriptionRequest::getTextEntities() const {
    return m_text_entities;
}
void OAIGiftPremiumSubscriptionRequest::setTextEntities(const QList<OAIMessageEntity> &text_entities) {
    m_text_entities = text_entities;
    m_text_entities_isSet = true;
}

bool OAIGiftPremiumSubscriptionRequest::is_text_entities_Set() const{
    return m_text_entities_isSet;
}

bool OAIGiftPremiumSubscriptionRequest::is_text_entities_Valid() const{
    return m_text_entities_isValid;
}

bool OAIGiftPremiumSubscriptionRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_month_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGiftPremiumSubscriptionRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_month_count_isValid && m_star_count_isValid && true;
}

} // namespace tele_rest
