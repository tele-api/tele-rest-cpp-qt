/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIAcceptedGiftTypes.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIAcceptedGiftTypes::OAIAcceptedGiftTypes(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAcceptedGiftTypes::OAIAcceptedGiftTypes() {
    this->initializeModel();
}

OAIAcceptedGiftTypes::~OAIAcceptedGiftTypes() {}

void OAIAcceptedGiftTypes::initializeModel() {

    m_unlimited_gifts_isSet = false;
    m_unlimited_gifts_isValid = false;

    m_limited_gifts_isSet = false;
    m_limited_gifts_isValid = false;

    m_unique_gifts_isSet = false;
    m_unique_gifts_isValid = false;

    m_premium_subscription_isSet = false;
    m_premium_subscription_isValid = false;
}

void OAIAcceptedGiftTypes::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAcceptedGiftTypes::fromJsonObject(QJsonObject json) {

    m_unlimited_gifts_isValid = ::tele_rest::fromJsonValue(m_unlimited_gifts, json[QString("unlimited_gifts")]);
    m_unlimited_gifts_isSet = !json[QString("unlimited_gifts")].isNull() && m_unlimited_gifts_isValid;

    m_limited_gifts_isValid = ::tele_rest::fromJsonValue(m_limited_gifts, json[QString("limited_gifts")]);
    m_limited_gifts_isSet = !json[QString("limited_gifts")].isNull() && m_limited_gifts_isValid;

    m_unique_gifts_isValid = ::tele_rest::fromJsonValue(m_unique_gifts, json[QString("unique_gifts")]);
    m_unique_gifts_isSet = !json[QString("unique_gifts")].isNull() && m_unique_gifts_isValid;

    m_premium_subscription_isValid = ::tele_rest::fromJsonValue(m_premium_subscription, json[QString("premium_subscription")]);
    m_premium_subscription_isSet = !json[QString("premium_subscription")].isNull() && m_premium_subscription_isValid;
}

QString OAIAcceptedGiftTypes::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAcceptedGiftTypes::asJsonObject() const {
    QJsonObject obj;
    if (m_unlimited_gifts_isSet) {
        obj.insert(QString("unlimited_gifts"), ::tele_rest::toJsonValue(m_unlimited_gifts));
    }
    if (m_limited_gifts_isSet) {
        obj.insert(QString("limited_gifts"), ::tele_rest::toJsonValue(m_limited_gifts));
    }
    if (m_unique_gifts_isSet) {
        obj.insert(QString("unique_gifts"), ::tele_rest::toJsonValue(m_unique_gifts));
    }
    if (m_premium_subscription_isSet) {
        obj.insert(QString("premium_subscription"), ::tele_rest::toJsonValue(m_premium_subscription));
    }
    return obj;
}

bool OAIAcceptedGiftTypes::isUnlimitedGifts() const {
    return m_unlimited_gifts;
}
void OAIAcceptedGiftTypes::setUnlimitedGifts(const bool &unlimited_gifts) {
    m_unlimited_gifts = unlimited_gifts;
    m_unlimited_gifts_isSet = true;
}

bool OAIAcceptedGiftTypes::is_unlimited_gifts_Set() const{
    return m_unlimited_gifts_isSet;
}

bool OAIAcceptedGiftTypes::is_unlimited_gifts_Valid() const{
    return m_unlimited_gifts_isValid;
}

bool OAIAcceptedGiftTypes::isLimitedGifts() const {
    return m_limited_gifts;
}
void OAIAcceptedGiftTypes::setLimitedGifts(const bool &limited_gifts) {
    m_limited_gifts = limited_gifts;
    m_limited_gifts_isSet = true;
}

bool OAIAcceptedGiftTypes::is_limited_gifts_Set() const{
    return m_limited_gifts_isSet;
}

bool OAIAcceptedGiftTypes::is_limited_gifts_Valid() const{
    return m_limited_gifts_isValid;
}

bool OAIAcceptedGiftTypes::isUniqueGifts() const {
    return m_unique_gifts;
}
void OAIAcceptedGiftTypes::setUniqueGifts(const bool &unique_gifts) {
    m_unique_gifts = unique_gifts;
    m_unique_gifts_isSet = true;
}

bool OAIAcceptedGiftTypes::is_unique_gifts_Set() const{
    return m_unique_gifts_isSet;
}

bool OAIAcceptedGiftTypes::is_unique_gifts_Valid() const{
    return m_unique_gifts_isValid;
}

bool OAIAcceptedGiftTypes::isPremiumSubscription() const {
    return m_premium_subscription;
}
void OAIAcceptedGiftTypes::setPremiumSubscription(const bool &premium_subscription) {
    m_premium_subscription = premium_subscription;
    m_premium_subscription_isSet = true;
}

bool OAIAcceptedGiftTypes::is_premium_subscription_Set() const{
    return m_premium_subscription_isSet;
}

bool OAIAcceptedGiftTypes::is_premium_subscription_Valid() const{
    return m_premium_subscription_isValid;
}

bool OAIAcceptedGiftTypes::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_unlimited_gifts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_limited_gifts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unique_gifts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAcceptedGiftTypes::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_unlimited_gifts_isValid && m_limited_gifts_isValid && m_unique_gifts_isValid && m_premium_subscription_isValid && true;
}

} // namespace tele_rest
