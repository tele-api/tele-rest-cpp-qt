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

/*
 * OAIAcceptedGiftTypes.h
 *
 * This object describes the types of gifts that can be gifted to a user or a chat.
 */

#ifndef OAIAcceptedGiftTypes_H
#define OAIAcceptedGiftTypes_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIAcceptedGiftTypes : public OAIObject {
public:
    OAIAcceptedGiftTypes();
    OAIAcceptedGiftTypes(QString json);
    ~OAIAcceptedGiftTypes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isUnlimitedGifts() const;
    void setUnlimitedGifts(const bool &unlimited_gifts);
    bool is_unlimited_gifts_Set() const;
    bool is_unlimited_gifts_Valid() const;

    bool isLimitedGifts() const;
    void setLimitedGifts(const bool &limited_gifts);
    bool is_limited_gifts_Set() const;
    bool is_limited_gifts_Valid() const;

    bool isUniqueGifts() const;
    void setUniqueGifts(const bool &unique_gifts);
    bool is_unique_gifts_Set() const;
    bool is_unique_gifts_Valid() const;

    bool isPremiumSubscription() const;
    void setPremiumSubscription(const bool &premium_subscription);
    bool is_premium_subscription_Set() const;
    bool is_premium_subscription_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_unlimited_gifts;
    bool m_unlimited_gifts_isSet;
    bool m_unlimited_gifts_isValid;

    bool m_limited_gifts;
    bool m_limited_gifts_isSet;
    bool m_limited_gifts_isValid;

    bool m_unique_gifts;
    bool m_unique_gifts_isSet;
    bool m_unique_gifts_isValid;

    bool m_premium_subscription;
    bool m_premium_subscription_isSet;
    bool m_premium_subscription_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIAcceptedGiftTypes)

#endif // OAIAcceptedGiftTypes_H
